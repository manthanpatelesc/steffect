package sensetime.senseme.com.effects.domain;

import java.io.Serializable;

/**
 * Created by liupan on 17/8/15.
 */

public class Cosmetic implements Serializable {
    String cosmeticId ;
    String cosmeticLogo;
    String cosmeticDesc;

    public String getCosmeticId() {
        return cosmeticId;
    }

    public void setCosmeticId(String cosmeticId) {
        this.cosmeticId = cosmeticId;
    }

    public String getCosmeticLogo() {
        return cosmeticLogo;
    }

    public void setCosmeticLogo(String cosmeticLogo) {
        this.cosmeticLogo = cosmeticLogo;
    }

    public String getCosmeticDesc() {
        return cosmeticDesc;
    }

    public void setCosmeticDesc(String cosmeticDesc) {
        this.cosmeticDesc = cosmeticDesc;
    }
}
