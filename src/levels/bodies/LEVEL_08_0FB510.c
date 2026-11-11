typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0037F86C[];
extern void func_0FB3A8(void *obj, void *pos, void *vel, float f);

void func_0FB510(unsigned int index, void *pos, void *vel, float f) {
    func_0FB3A8(&D_0037F86C[index], pos, vel, f);
}
