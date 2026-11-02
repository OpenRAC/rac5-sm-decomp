typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00317D3C[];
extern void func_0EB6E0(Entry *entry);

void func_0EB810(unsigned int index) {
    func_0EB6E0(&D_00317D3C[index]);
}
