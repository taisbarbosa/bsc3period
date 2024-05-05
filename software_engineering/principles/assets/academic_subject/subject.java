package assets.academic_subject;

import assets.student.student;

public class subject {
    String name;
    String description;
    String code;
    int period_min;
    area area_knowledge;
    student students[];
    int size_student;
    
    public subject(String name, String description, String code, int period, area area_knowledge) {
        this.name = name;
        this.description = description;
        this.code = code;
        this.period_min = period;
        this.area_knowledge = area_knowledge;
        this.students = students;
        this.size_student=0;
    }
    public void add_student(student s){
        size_student++;
        students[size_student-1]=s;
    }
    public String getName() {
        return name;
    }
    public void setName(String name) {
        this.name = name;
    }
    public String getDescription() {
        return description;
    }
    public void setDescription(String description) {
        this.description = description;
    }
    public String getCode() {
        return code;
    }
    public void setCode(String code) {
        this.code = code;
    }
    public int getPeriod() {
        return period_min;
    }
    public void setPeriod(int period) {
        this.period_min = period;
    }
    public area getArea_knowledge() {
        return area_knowledge;
    }
    public void setArea_knowledge(area area_knowledge) {
        this.area_knowledge = area_knowledge;
    }
    public student[] getStudent() {
        return students;
    }
    public void setStudent(student[] student) {
        this.students = student;
    } 
}
