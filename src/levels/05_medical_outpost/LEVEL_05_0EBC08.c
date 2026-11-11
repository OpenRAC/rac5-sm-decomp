typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0031C4AC[];
extern void func_0EBAA0(void *obj, void *pos, void *vel, float f);

void func_0EBC08(unsigned int index, void *pos, void *vel, float f) {
    func_0EBAA0(&D_0031C4AC[index], pos, vel, f);
}
