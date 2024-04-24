import assets.a_class.a_class;
import assets.mister.formation;
import assets.mister.mister;
import assets.mister.post;


public class main {
    public static void my_main(String arg[]){
        
        formation f1 = new formation("Sciense Computer", "Stanford", 1, 2015);
        formation f2 = new formation("Sciense Computer", "MIT", 1, 2010);
        formation f3 = new formation("Mathematics", "Harvard University", 1, 2018);
        post p1 = new post(1);
        mister m1 = new mister("Frank Johnson", "1990-01-01", "m00001", f1, p1);
        mister m2 = new mister("Grace Lizzie", "1984-04-12", "m00001", f2, p1);
        mister m3 = new mister("Anne Hal", "1988-11-20", "m00001", f3, p1);

        a_class c1 = new a_class("The class 1", "Description, description and description", "2024-01-05", m1);
        a_class c2 = new a_class("The class 2", "Description, description and description", "2024-01-05", m2);
        a_class c3 = new a_class("The class 3", "Description, description and description", "2024-01-05", m3);
    }
}
