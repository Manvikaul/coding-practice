//hackerrank
//30 days of code

#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:

        Student (string fn, string ln, int ID, vector<int> scores): Person(fn,ln,ID)
        {
            firstName=fn;
            lastName=ln;
            id=ID;
            testScores=scores;
        }

        char calculate()
        {
            int total=0;
            for (long unsigned int i=0;i<testScores.size();i++)
            {
                total=total+testScores[i];
            }

            total=total/testScores.size();

            if(total<=100 && total>=90)
            {
                return 'O';
            }
            if(total<90 && total>=80)
            {
                return 'E';
            }
            if(total<80 && total>=70)
            {
                return 'A';
            }
            if(total<70 && total>=55)
            {
                return 'P';
            }
            if(total<55 && total>=40)
            {
                return 'D';
            }
            else
            {
                return 'T';
            }
        }
        /*	
        *   Class Constructor
        *   
        *   Parameters:
        *   firstName - A string denoting the Person's first name.
        *   lastName - A string denoting the Person's last name.
        *   id - An integer denoting the Person's ID number.
        *   scores - An array of integers denoting the Person's test scores.
        */
        // Write your constructor here

        /*	
        *   Function Name: calculate
        *   Return: A character denoting the grade.
        */
        // Write your function here
};

int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
