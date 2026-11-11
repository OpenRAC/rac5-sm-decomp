typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0031D36C[];
extern void func_0E8A20(void *obj, void *pos, void *vel, float f);

void func_0E8B88(unsigned int index, void *pos, void *vel, float f) {
    func_0E8A20(&D_0031D36C[index], pos, vel, f);
}
