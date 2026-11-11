typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00301A2C[];
extern void func_0E2848(void *obj, void *pos, void *vel, float f);

void func_0E29B0(unsigned int index, void *pos, void *vel, float f) {
    func_0E2848(&D_00301A2C[index], pos, vel, f);
}
