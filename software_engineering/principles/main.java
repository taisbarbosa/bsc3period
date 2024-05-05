import assets.a_class.a_class;
import assets.academic_subject.area;
import assets.academic_subject.subject;
import assets.mister.formation;
import assets.mister.mister;
import assets.mister.post;


public class main {
    public static void main(String arg[]){
        
        formation f1 = new formation("Sciense Computer", "Stanford", 1, 2015);
        formation f2 = new formation("Sciense Computer", "MIT", 1, 2010);
        formation f3 = new formation("Mathematics", "Harvard University", 1, 2018);
        post p1 = new post(1);
        post p2 = new post(2);
        mister m1 = new mister("Frank Johnson", "1990-01-01", "m00001", f1, p1);
        mister m2 = new mister("Grace Lizzie", "1984-04-12", "m00001", f2, p1);
        mister m3 = new mister("Anne Hal", "1988-11-20", "m00001", f3, p1);
        area a1 = new area(1);
        area a2 = new area(2);
        area a6 = new area(6);
        subject s1 = new subject("Algebra", "Description of the subject", "AGB4001", 2, a1);
        subject s2 = new subject("History of America", "Description of the subject", "HAM4000", 2, a2);
        subject s3 = new subject("Algorithm 1", "Description of the subject", "AG13010", 2, a6);
        subject s4 = new subject("Algorithm 2", "Description of the subject", "AG23010", 2, a6);
        a_class c1 = new a_class(s1.getCode(),"The class 1", "Description, description and description", "2024-01-05", m3);
        a_class c2 = new a_class(s3.getCode(),"The class 2", "Description, description and description", "2024-01-10", m2);
        a_class c3 = new a_class(s4.getCode(),"The class 3", "Description, description and description", "2023-11-20", m1);

        c1.print();
        c2.print();
        c3.print();
    }
}
