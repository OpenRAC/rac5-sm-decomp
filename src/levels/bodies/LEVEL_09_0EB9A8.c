typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_00317D6C[];
extern void func_0EB840(Entry *entry);

void func_0EB9A8(unsigned int index) {
    func_0EB840(&D_00317D6C[index]);
}
