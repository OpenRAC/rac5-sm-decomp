typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00345EEC[];
extern void func_0F0760(void *obj, void *pos, void *vel, float f);

void func_0F08C8(unsigned int index, void *pos, void *vel, float f) {
    func_0F0760(&D_00345EEC[index], pos, vel, f);
}
