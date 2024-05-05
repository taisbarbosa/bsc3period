package assets.student;


public class student{
    private
        String name;
        String birth;
        String identification;
        course course;
    
    student(String name, String birth, String identation, course c){
        this.name = name;
        this.birth = birth;
        this.identification = identation;
        this.course = c;
    }

    public course getCourse() {
        return course;
    }

    public void setCourse(course course) {
        this.course = course;
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