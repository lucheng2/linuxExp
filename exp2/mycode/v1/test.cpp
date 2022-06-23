#include "ObjectA.h"

int main(){
    ObjectA objectA(100, "test Serialize version one.dadsafsaf sdfasfdlkjg;dkljg lkdjf;l sjadf l;kadjsfl;ksjf;lksjg;lsadjgldskjflksdjf;lksdjflk;sjg;ldkjgl;dkjgl;kasdjf;lksjfd;lksjflkdsjfl;skjdfksf;lkgjl;kdsjflasdkjfa;lskfdjal;skdjfl;skdjfsa;lkfj ;lksdjf;lksdjfg;lkjhf;lksjhf;lksdjg;lkdjfg fsadfsafsdfzdfgd fsgdfgdsfgfdgdfsgdsgdsg dfgdsfgdsgfgfdgdgfdgdfgxd fdgdf");
    objectA.Serialize("data");
    printf("%d\n",objectA.str.size();
    objectA.print();
    ObjectA deserializedA = ObjectA::Deserialize("data");
    deserializedA.print();
    return 0;
}