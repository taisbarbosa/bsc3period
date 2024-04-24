package assets.academic_subject;

import assets.student.student;

public class subject {
    String name;
    String description;
    String code;
    int period[];
    area area_knowledge;
    student student[];
    
    public subject(String name, String description, String code, int[] period, area area_knowledge, assets.student.student[] student) {
        this.name = name;
        this.description = description;
        this.code = code;
        this.period = period;
        this.area_knowledge = area_knowledge;
        this.student = student;
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
    public int[] getPeriod() {
        return period;
    }
    public void setPeriod(int[] period) {
        this.period = period;
    }
    public area getArea_knowledge() {
        return area_knowledge;
    }
    public void setArea_knowledge(area area_knowledge) {
        this.area_knowledge = area_knowledge;
    }
    public student[] getStudent() {
        return student;
    }
    public void setStudent(student[] student) {
        this.student = student;
    } 
}
