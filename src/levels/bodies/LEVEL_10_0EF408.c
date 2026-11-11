typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_003399EC[];
extern void func_0EF2A0(void *obj, void *pos, void *vel, float f);

void func_0EF408(unsigned int index, void *pos, void *vel, float f) {
    func_0EF2A0(&D_003399EC[index], pos, vel, f);
}
