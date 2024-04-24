package assets.mister;

public class formation {
    private
        String name;
        String institution;
        enum type{
            Begree,
            Bachelor,
            Technologist,
            Technician,
            Specialization,
            Doctorate, 
            Mastersdegree;
        }
        int f_type;
        String s_type;
        int year;

    public formation(String name, String institution, int type, int year) {
        this.name = name;
        this.institution = institution;
        this.f_type = type;
        this.year = year;
    }
    public void type_formation(){
        if (f_type==0) {
            s_type= type.Begree.toString();
        }
        if (f_type==1) {
            s_type= type.Bachelor.toString();
        }
        if (f_type==2) {
            s_type= type.Technologist.toString();
        }
        if (f_type==3) {
            s_type= type.Technician.toString();
        }
        if (f_type==4) {
            s_type= type.Specialization.toString();
        }
        if (f_type==5) {
            s_type= type.Doctorate.toString();
        }
        if (f_type==6) {
            s_type= type.Mastersdegree.toString();
        }
    }

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
    public int getF_type() {
        return f_type;
    }
    public void setF_type(int f_type) {
        this.f_type = f_type;
    }
    public String getS_type() {
        return s_type;
    }
    public void setS_type(String s_type) {
        this.s_type = s_type;
    }
    public int getYear() {
        return year;
    }
    public void setYear(int year) {
        this.year = year;
    }
    
}
