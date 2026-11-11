typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003305EC[];
extern void func_0EF960(void *obj, void *pos, void *vel, float f);

void func_0EFAC8(unsigned int index, void *pos, void *vel, float f) {
    func_0EF960(&D_003305EC[index], pos, vel, f);
}
