#include <iostream>
#include <fstream>
#include <string>

using  namespace std ;
class ObjectA{

    public:
        ObjectA(){
            i = 0;
            str = "";
        }

        ObjectA(int j){
            i = j;
            str = "";
        }

        ObjectA(int j, string str){
            i = j;
            this->str = str;
        }

        int getJ(){
        	return i;
        }

        string getStr(){
        	return str;
        }


        int Serialize(string pBuffer){
            int length = sizeof(this->str);
            printf("%d\n",length);
            ofstream *o = new ofstream(pBuffer);
            o->write((char*)this, length);
            o->close();
            delete o;
            return 0;            
        }

        static ObjectA Deserialize(const char* pBuffer){
            char* buf = (char*)malloc(1000);
            ifstream is(pBuffer);
            is >> buf;
            ObjectA *objectA = (ObjectA*) buf;
            is.close();
            return (*objectA);
        }

        void print(){
            cout << "i = " << this->i << endl;
            cout << "str = " << this->str << endl;
        }

        public:
        int i;
        string str;

};
