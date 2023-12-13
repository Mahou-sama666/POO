//
//    #include <iostream>
//using namespace std;
//
//class Date {
//    int day;
//    int month;
//    int year;
//
//public:
//
//    Date() :day(0), month(0), year(0) {}
//    Date(int a, int b, int c) : day(a), month(b), year(c) {}
//};
//
//
//class Persoana {
//    string name;
//    string pin;
//    Date Birthday;
//    string* adresses;
//    int adrsCount;
//
//public:
//    Persoana() {
//        name = "";
//        pin = "";
//        Date d;
//        this->Birthday = d;
//        adresses = nullptr;
//        adrsCount = 0;
//    }
//    Persoana(string name, string pin, Date BirthDay, string* adresses, int adrsCount) : adrsCount(adrsCount) {
//        this->name = name;
//        this->pin = pin;
//        this->Birthday = BirthDay;
//        this->adresses = new string[adrsCount];
//        for (int i = 0; i < adrsCount; i++) {
//            this->adresses[i] = adresses[i];
//        }
//    }
//
//    //constr copiere
//    Persoana(const Persoana& P) {
//        this->name = P.name;
//        this->pin = P.pin;
//        this->Birthday = P.Birthday;
//        this->adresses = new string[P.adrsCount];
//        for (int i = 0; i < P.adrsCount; i++) {
//            this->adresses[i] = P.adresses[i];
//        }
//        this->adrsCount = P.adrsCount;
//    }
//
//    //op =
//    Persoana& operator=(const Persoana& P) {
//        if (this != &P) {
//            Persoana* P1;
//            P1->name = P.name;
//            P1->pin = P.pin;
//            P1->Birthday = P.Birthday;
//            P1->adresses = new string[P.adrsCount];
//            for (int i = 0; i < P.adrsCount; i++) {
//                P1->adresses[i] = P.adresses[i];
//            }
//            P1->adrsCount = P.adrsCount;
//            return *P1;
//        }
//        else return *this;
//    }
//    virtual string displayDetails() {
//        return;
//    }
//    //destructor
//    ~Persoana() {
//        delete[] adresses;
//    }
//};
//
//class Student :public Persoana {
//    int regNo;
//    float* grades;
//    int gCount;
//    bool scholarship;
//public:
//    Student() :Persoana() {
//        this->regNo = 0;
//        this->grades = nullptr;
//        this->gCount = 0;
//        this->scholarship = false;
//    }
//    Student(string name, string pin, Date BirthDay, string* adresses, int adrsCount, int regNo, float* grades, int gCount, bool scholarship) :
//        Persoana(name, pin, BirthDay, adresses, adrsCount)
//    {
//        this->regNo = regNo;
//        this->grades = new float[gCount];
//        for (int i = 0; i < gCount; i++) {
//            this->grades[i] = grades[i];
//        }
//        this->scholarship = scholarship;
//    }
//
//    Student(const Student& S) : Persoana(S) {
//        regNo = S.regNo;
//        gCount = S.gCount;
//        scholarship = S.scholarship;
//        grades = new float[gCount];
//        for (int i = 0; i < gCount; i++) {
//            grades[i] = S.grades[i];
//        }
//    }
//
//    Student& oerator = (const Student & S1){
//        
//    }
//
//    ~Student() {
//        delete[] grades;
//    }
//};
//
//class Professor :public Persoana {
//    float salary;
//public:
//    Professor() :Persoana() {
//        this->salary = 0;
//    }
//    Professor(string name, string pin, Date BirthDay, string* adresses, int adrsCount, float salary) :Persoana(name, CNP, BirthDay, adresses, adrsCount) {
//        this->salary = 0;
//    }
//    string displayDetail() override{
//        return "I'm a professor";                                                                           
//};
//
//class Universitate {
//    string name = "";
//    string adress = "";
//    Student* students = nullptr;
//    int sCout = 0;
//
//    Persoana* all=nullptr;
//    int countAll = 0;
//public:
//    Universitate(string name, string adress, Student* students, int sCout) {
//        this->name = name;
//        this->adress = adress;
//        this->sCout = sCout;
//        this->students = new Student[sCout];
//        for (int i = 0; i < sCout; i++) {
//            this->students[i] = students[i];
//        }
//    }
//
//    void setAllPersons(Persoana* p, int countP) {
//        this->countAll = countP;
//        this->all = new Persoana[countP];
//        for (int i = 0; i < countP; i++)
//            this->all[i] = p[i];
//    }
//
//    void  listallpers() {
//        for (int i = 0; i < this->countAll; i++)
//            cout << this->all[i].displayDetails();
//    }
//
//    //constr copiere
//    //operator=
//    ~Universitate() {
//        delete[] students;
//    }
//};
//
////int main() {
////    Date d1;
////    Date d2(6, 12, 12023);
////
////    Persoana p1;
////    string* adresses = new string[3];
////    adresses[0] = "..Buc";
////    adresses[1] = "..Arad";
////    adresses[2] = "Constanta..";
////    Persoana p2("P Andrei", "324353", d2, adresses, 3);
////
////    Student s1;
////    float* grades = new float[3];
////    grades[0] = 10;
////    grades[1] = 10;
////    grades[2] = 10;
////    Student s2("P A", "84847", d2, adresses, 3, 123, grades, 3, true);
////
////    Student* students = new Student[2];
////    students[0] = s1;
////    students[1] = s2;
////    Universitate u1("Universitate A", "Adresa A", students, 2);
////
////}
////
////    //destructor
////    ~Persoana() {
////        delete[] adresses;
////    }
////};
//
//class Student :Persoana {
//    int regNo;
//    float* grades;
//    int gCount;
//    bool scholarship;
//public:
//    Student() :Persoana() {
//        this->regNo = 0;
//        this->grades = nullptr;
//        this->gCount = 0;
//        this->scholarship = false;
//    }
//    Student(string name, string pin, Date BirthDay, string* adresses, int adrsCount, int regNo, float* grades, int gCount, bool scholarship) :
//        Persoana(name, pin, BirthDay, adresses, adrsCount)
//    {
//        this->regNo = regNo;
//        this->grades = new float[gCount];
//        for (int i = 0; i < gCount; i++) {
//            this->grades[i] = grades[i];
//        }
//        this->scholarship = scholarship;
//    }
//
//    Student(const Student& S) : Persoana(S) {
//        regNo = S.regNo;
//        gCount = S.gCount;
//        scholarship = S.scholarship;
//        grades = new float[gCount];
//        for (int i = 0; i < gCount; i++) {
//            grades[i] = S.grades[i];
//        }
//    }
//
//    Student& oerator = (const Student & S1){
//
//    }
//
//    ~Student() {
//        delete[] grades;
//    }
//};
//
//class Professor :Persoana {
//    float salary;
//public:
//    Professor() :Persoana() {
//        this->salary = 0;
//    }
//    Professor(string name, string pin, Date BirthDay, string* adresses, int adrsCount, float salary) :Persoana(name, CNP, BirthDay, adresses, adrsCount) {
//        this->salary = 0;
//    }
//};
//
//class Universitate {
//    string name = "";
//    string adress = "";
//    Student* students = nullptr;
//    int sCout = 0;
//
//    Persoana** all=nullptr;
//    int countAll = 0;
//public:
//    Universitate(string name, string adress, Student* students, int sCout) {
//        this->name = name;
//        this->adress = adress;
//        this->sCout = sCout;
//        this->students = new Student[sCout];
//        for (int i = 0; i < sCout; i++) {
//            this->students[i] = students[i];
//        }
//    }
//
//    void setAllPersons(Persoana* p, int countP) {
//        this->countAll = countP;
//        this->all = p;
//        ////this->all = new Persoana*[countP];
//        //for (int i = 0; i < countP; i++)
//        //    this->all[i] = p[i];
//        
//    }
//
//    void  listallpers() {
//        for (int i = 0; i < this->countAll; i++)
//            cout << this->all[i].displayDetails()<<endl;
//    }
//
//    //constr copiere
//    //operator=
//    ~Universitate() {
//        delete[] students;
//    }
//};
//
//int main() {
//    Date d1;
//    Date d2(6, 12, 12023);
//
//    Persoana p1;
//    string* adresses = new string[3];
//    adresses[0] = "..Buc";
//    adresses[1] = "..Arad";
//    adresses[2] = "Constanta..";
//    Persoana p2("P Andrei", "324353", d2, adresses, 3);
//
//    Student s1;
//    float* grades = new float[3];
//    grades[0] = 10;
//    grades[1] = 10;
//    grades[2] = 10;
//    Student s2("P A", "84847", d2, adresses, 3, 123, grades, 3, true);
//
//    Student* students = new Student[2];
//    students[0] = s1;
//    students[1] = s2;
//    
//
//    Persoana** all = new Persoana * [3];
//    Persoana* person = new Persoana("P Andrei", "324353", d2, adresses, 3);
//    Persoana* student = new Persoana("P Andreea", "32224353", d2, adresses, 3);
//    Persoana* profersor = new Persoana * ("Pa An", "32435232323", d2, adresses, 3);
//
//    all[0] = person;
//    all[1] = student;
//    all[2] = profersor;
//
//    Universitate u1("Universitate A", "Adresa A", students, 3);
//    u1.setAllPersons(all, 3);
//}