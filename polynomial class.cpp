
/*************
 Driver program to test below functions
 
int main()
{
    int count1,count2,choice;
    cin >> count1;
    
    int *degree1 = new int[count1];
    int *coeff1 = new int[count1];
    
    for(int i=0;i < count1; i++) {
        cin >> degree1[i];
    }
    
    for(int i=0;i < count1; i++) {
        cin >> coeff1[i];
    }
    
    Polynomial first;
    for(int i = 0; i < count1; i++){
        first.setCoefficient(degree1[i],coeff1[i]);
    }
    
    cin >> count2;
    
    int *degree2 = new int[count2];
    int *coeff2 = new int[count2];
    
    for(int i=0;i < count2; i++) {
        cin >> degree2[i];
    }
    
    for(int i=0;i < count2; i++) {
        cin >> coeff2[i];
    }
    
    Polynomial second;
    for(int i = 0; i < count2; i++){
        second.setCoefficient(degree2[i],coeff2[i]);
    }
    
    cin >> choice;
    
    Polynomial result;
    switch(choice){
            // Add
        case 1:
            result = first + second;
            result.print();
            break;
            // Subtract
        case 2 :
            result = first - second;
            result.print();
            break;
            // Multiply
        case 3 :
            result = first * second;
            result.print();
            break;
            
        case 4 : // Copy constructor
        {
            Polynomial third(first);
            if(third.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
        case 5 : // Copy assignment operator
        {
            Polynomial fourth(first);
            if(fourth.degCoeff == first.degCoeff) {
                cout << "false" << endl;
            }
            else {
                cout << "true" << endl;
            }
            break;
        }
            
    }
    
    return 0;
}
****************/

// class Polynomial {
//     public:
    
//     int *degCoeff;      // Name of your array (Don't change this)
//     int capacity;
//     // Complete the class
    
//     Polynomial()
//     {
//         degCoeff=new int[5];
//         capacity=5;
        
//         for(int i=0;i<capacity;i++)
//         {
//             degCoeff[i]=0;
//         }
//     }
    
//     Polynomial(Polynomial const &p)
//     {
//         this->degCoeff=new int[p.capacity];
        
//         for(int i=0;i<p.capacity;i++)
//         {
//             this->degCoeff[i]=p.degCoeff[i];
//         }
        
//         this->capacity=p.capacity;
//     }
    
//     void operator=(Polynomial const &p)
//     {
//         this->degCoeff=new int[p.capacity];
        
//         for(int i=0;i<p.capacity;i++)
//         {
//             this->degCoeff[i]=p.degCoeff[i];
//         }
        
//         this->capacity=p.capacity;
//     }
    
//     void print()
//     {
//         for(int i=0;i<capacity;i++)
//         {
//             if(degCoeff[i]!=0)
//             {
//                 cout<<degCoeff[i]<<"x"<<i<<" ";
//             }
//             cout<<endl;
//         }
//     }
    
//     Polynomial operator+(Polynomial p2) 
//     {
//         Polynomial p3;
//         int  w;
//         int flag=0;
//         if(this->capacity<p2.capacity)
//         {
//             w=this->capacity;
//             flag=1;
//             p3.capacity=p2.capacity;
//         }
//         else
//         {
//             w=p2.capacity;
//             p3.capacity=this->capacity;
//         }

//         for(int i=0;i<w;i++)
//         {
//             p3.degCoeff[i]=this->degCoeff[i]+p2.degCoeff[i];
//         }
//         if(flag==1)
//         {
//             for(int i=w;i<p2.capacity;i++)
//             {
//                 p3.degCoeff[i]=p2.degCoeff[i];
//             }
//         }
//         else{
//             for(int i=w;i<this->capacity;i++)
//             {
//                 p3.degCoeff[i]=this->degCoeff[i];
//             }
//         }
//         return p3;
//     }
    
//     Polynomial operator-(Polynomial const &p2) 
//     {
//          Polynomial p3;
//         int  w;
//         int flag=0;
//         if(this->capacity<p2.capacity)
//         {
//             w=this->capacity;
//             flag=1;
//             p3.capacity=p2.capacity;
//         }
//         else
//         {
//             w=p2.capacity;
//             p3.capacity=this->capacity;
//         }

//         for(int i=0;i<w;i++)
//         {
//             p3.degCoeff[i]=this->degCoeff[i]-p2.degCoeff[i];
//         }
//         if(flag==1)
//         {
//             for(int i=w;i<p2.capacity;i++)
//             {
//                 p3.degCoeff[i]=p2.degCoeff[i];
//             }
//         }
//         else{
//             for(int i=w;i<this->capacity;i++)
//             {
//                 p3.degCoeff[i]=this->degCoeff[i];
//             }
//         }
//         return p3;
//     }
    
//     Polynomial operator*(Polynomial const &p2) const
//     {
        
//     }
    
//     void setCoefficient(int deg,int cap)
//     {
//         if(deg<capacity)
//         {
//             degCoeff[deg]=cap;
//         }
//         else
//         {
//              int *dc= new int[2*capacity];
//             for(int i=0;i<capacity;i++)
//             {
//                 dc[i]=degCoeff[i];
//             }
//             for(int i=capacity;i<2*capacity;i++)
//             {
//                 dc[i]=0;
//             }
//             delete [] degCoeff;
//             degCoeff=dc;
//             capacity=2*capacity;
//             setCoefficient(deg,cap);
            
//         }
//     }
//     Polynomial operator = (const Polynomial& p)
//             {
//                 this->degCoeff= new int[p.capacity];
//                 for(int i=0;i<p.capacity;i++)
//                 {
//                     this->degCoeff[i]=p.degCoeff[i];
//                 }
//                 this->capacity=p.capacity;
//         return *this;
//             } 
// };

class Polynomial {
    public:
    int *degCoeff; // Name of your array (Don't change this)
    int capacity;
    Polynomial()
    {
        degCoeff=new int[50];
        capacity=50;
        for(int i=0;i<capacity;i++)
        {
            degCoeff[i]=0;
        }
    }


    Polynomial (const Polynomial& p)
            {
                this->degCoeff= new int[p.capacity];
                for(int i=0;i<p.capacity;i++)
                {
                    this->degCoeff[i]=p.degCoeff[i];
                }
                this->capacity=p.capacity;
            }


    void setCoefficient(int d,int c)
    {
        if(d<capacity)
        {
            degCoeff[d]=c;
        }
        else
        {
            int *dc= new int[2*capacity];
            for(int i=0;i<capacity;i++)
            {
                dc[i]=degCoeff[i];
            }
            for(int i=capacity;i<2*capacity;i++)
            {
                dc[i]=0;
            }
            delete [] degCoeff;
            degCoeff=dc;
            capacity=2*capacity;
            setCoefficient(d,c);
        }
    }

    void print()
    {
        for(int i=0;i<capacity;i++)
        {
            if(this->degCoeff[i]!=0)
            {
                cout<<this->degCoeff[i]<<"x"<<i<<" ";
            }
        }
    }

    Polynomial operator +(Polynomial p2)
    {
        Polynomial p3;
        int  w;
        int flag=0;
        if(this->capacity<p2.capacity)
        {
            w=this->capacity;
            flag=1;
            p3.capacity=p2.capacity;
        }
        else
        {
            w=p2.capacity;
            p3.capacity=this->capacity;
        }

        for(int i=0;i<w;i++)
        {
            p3.degCoeff[i]=this->degCoeff[i]+p2.degCoeff[i];
        }
        if(flag==1)
        {
            for(int i=w;i<p2.capacity;i++)
            {
                p3.degCoeff[i]=p2.degCoeff[i];
            }
        }
        else{
            for(int i=w;i<this->capacity;i++)
            {
                p3.degCoeff[i]=this->degCoeff[i];
            }
        }
        return p3;
    }

     Polynomial operator -(Polynomial p2)
    {
        Polynomial p3;
        int  w;
        int flag=0;
        if(this->capacity<p2.capacity)
        {
            w=this->capacity;
            flag=1;
            p3.capacity=p2.capacity;
        }
        else
        {
            w=p2.capacity;
            p3.capacity=this->capacity;
        }

        for(int i=0;i<w;i++)
        {
            p3.degCoeff[i]=this->degCoeff[i]-p2.degCoeff[i];
        }
        if(flag==1)
        {
            for(int i=w;i<p2.capacity;i++)
            {
                p3.degCoeff[i]=p2.degCoeff[i];
            }
        }
        else{
            for(int i=w;i<this->capacity;i++)
            {
                p3.degCoeff[i]=this->degCoeff[i];
            }
        }
        return p3;
    }

    Polynomial operator *(Polynomial p2)
    {
        Polynomial p3;
        for(int i=0;i<this->capacity;i++)
        {
            if(this->degCoeff[i]!=0){
                for(int j=0;j<p2.capacity;j++)
                {
                    if(p2.degCoeff[j]!=0)
                    {
                        if(i+j<p3.capacity)
                        {
                            if(p3.degCoeff[i+j]==0){
                        p3.degCoeff[i+j]=(this->degCoeff[i])*(p2.degCoeff[j]);
                        }
                            else{
                            p3.degCoeff[i+j]=p3.degCoeff[i+j]+(this->degCoeff[i])*(p2.degCoeff[j]);
                            }
                        }
                        else
                        {
                            int *dc= new int[2*p3.capacity];
                            for(int i=0;i<p3.capacity;i++)
                            {
                                dc[i]=p3.degCoeff[i];
                            }
                            for(int i=p3.capacity;i<2*p3.capacity;i++)
                            {
                                dc[i]=0;
                            }
                            delete [] p3.degCoeff;
                            p3.degCoeff=dc;
                            p3.capacity=2*p3.capacity;
                            if(i+j<p3.capacity)
                            {
                                p3.degCoeff[i+j]=(this->degCoeff[i])*(p2.degCoeff[j]);
                            }
                        }
                    }
                }
            }
        }
        return p3;
    }

    Polynomial operator = (const Polynomial& p)
            {
                this->degCoeff= new int[p.capacity];
                for(int i=0;i<p.capacity;i++)
                {
                    this->degCoeff[i]=p.degCoeff[i];
                }
                this->capacity=p.capacity;
        return *this;
            }
};

