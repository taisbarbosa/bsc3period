package assets.mister;

public class post {
    enum Type{
        Regular,
        Substitute
    }
    String s_type;
    int type;

    public post(int type){
        this.type = type;
        this.s_type = s_type;
    }
    public void definition_post(){
        if (type==1) {
            s_type= Type.Regular.toString();
        }
        if (type==2) {
            s_type= Type.Substitute.toString();
        }
    }
    public int getType() {
        return type;
    }

    public void setType(int type) {
        this.type = type;
    }
    public String getS_type() {
        return s_type;
    }
    public void setS_type(String s_type) {
        this.s_type = s_type;
    }
    
}
