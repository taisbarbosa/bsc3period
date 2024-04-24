package assets.student;


public class student{
    private
        String name;
        String birth;
        String identification;
    
    student(String name, String birth, String identation){
        this.name = name;
        this.birth = birth;
        this.identification = identation;
    }

    public String getName(){
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getBirth() {
        return birth;
    }
    public void setBirth(String birth) {
        this.birth = birth;
    }
    public String getIdentification() {
        return identification;
    }
    public void setIdentification(String identification) {
        this.identification = identification;
    }
    
}