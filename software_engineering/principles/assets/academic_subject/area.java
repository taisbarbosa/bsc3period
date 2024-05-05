package assets.academic_subject;

public class area {
    enum Area{
        Exactly,
        Human,
        Social,
        Organic,
        Languages,
        Professional
    }
    int type_a;
    String s_a;
    
    public area(int type_a) {
        this.type_a = type_a;
        this.s_a = s_a;
    }
    public void definition_area(){
        if(type_a==1){
            s_a= Area.Exactly.toString();
        }if(type_a==2){
            s_a= Area.Human.toString();
        }if(type_a==3){
            s_a= Area.Social.toString();
        }if(type_a==4){
            s_a= Area.Organic.toString();
        }if(type_a==5){
            s_a= Area.Languages.toString();
        }if(type_a==6){
            s_a= Area.Professional.toString();
        }
    }
    public int getType_a() {
        return type_a;
    }
    public void setType_a(int type_a) {
        this.type_a = type_a;
    }
    public int getS_a() {
        return type_a;
    }
    public void setS_a(String s_a) {
        this.s_a = s_a;
    }
    
}
