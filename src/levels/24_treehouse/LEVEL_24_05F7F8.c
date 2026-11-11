typedef struct {
    char pad0[0x5AC];
    void *f_5AC;
    char pad1[0x9CF - 0x5B0];
    signed char b_9CF;
    char pad2[0xB8C - 0x9D0];
    int f_B8C;
    char pad3[0xBCB - 0xB90];
    signed char b_BCB;
    char pad4[0xFC4 - 0xBCC];
    float f_FC4;
} Obj;

int func_05F288(Obj *a0, int a1);
void func_1616E8(void *a0);
void func_061030(Obj *a0);
void func_05F998(Obj *a0);
void func_05F880(Obj *a0);

void func_05F7F8(Obj *self)
{
    if (self->f_B8C == 0) {
        self->f_B8C = func_05F288(self, 0);
        if (self->f_B8C == 0)
            return;
    }
    if (self->f_5AC != 0)
        func_1616E8(self->f_5AC);
    self->b_BCB = 0;
    self->b_9CF = 1;
    self->f_FC4 = 0.066666670143604279f;
    func_061030(self);
    func_05F998(self);
    func_05F880(self);
}
