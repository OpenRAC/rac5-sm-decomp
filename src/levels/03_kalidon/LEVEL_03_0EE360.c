typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0034B46C[];
extern void func_0EE1F8(void *obj, void *pos, void *vel, float f);

void func_0EE360(unsigned int index, void *pos, void *vel, float f) {
    func_0EE1F8(&D_0034B46C[index], pos, vel, f);
}
