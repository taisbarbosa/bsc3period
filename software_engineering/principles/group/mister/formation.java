package mister;

public class formation {
    String name;
    String institution;
    enum type{
        Begree,
        Bachelor,
        Technologist,
        Technician,
        Specialization,
        doctorate, 
        Mastersdegree
    }
    int year;
    
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getInstitution() {
        return institution;
    }
    public void setInstitution(String institution) {
        this.institution = institution;
    }
    public int getYear() {
        return year;
    }
    public void setYear(int year) {
        this.year = year;
    }
    
}
