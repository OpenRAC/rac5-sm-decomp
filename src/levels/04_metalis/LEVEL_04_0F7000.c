typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0034ADEC[];
extern void func_0F6E98(void *obj, void *pos, void *vel, float f);

void func_0F7000(unsigned int index, void *pos, void *vel, float f) {
    func_0F6E98(&D_0034ADEC[index], pos, vel, f);
}
