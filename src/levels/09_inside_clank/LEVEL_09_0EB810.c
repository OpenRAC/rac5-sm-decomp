typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00317D3C[];
extern void func_0EB6E0(Entry *entry, float *pos);

void func_0EB810(unsigned int index, float *pos) {
    func_0EB6E0(&D_00317D3C[index], pos);
}
