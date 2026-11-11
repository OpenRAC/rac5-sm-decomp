struct Obj {
    int pad[2];
    float f08;
    float f0c;
    float f10;
    float f14;
    float f18;
    unsigned char f1c;
    unsigned char pad1[3];
    int f20;
    int f24;
};

void func_0a0880(struct Obj *obj)
{
    int state = obj->f20;

    if (state != 1) {
        if (obj->f1c != 0) {
            obj->f08 = obj->f08 + obj->f14;
            if (obj->f10 <= obj->f08) {
                obj->f08 = obj->f10;
                if (state != 2)
                    obj->f1c ^= 1;
            }
        } else {
            obj->f08 = obj->f08 - obj->f18;
            if (obj->f08 <= obj->f0c) {
                obj->f08 = obj->f0c;
                if (state != 3)
                    obj->f1c ^= 1;
            }
        }
    }
    if (obj->f24 != 0 && (obj->f24 = obj->f24 - 1) == 0)
        obj->f20 = 0;
}
