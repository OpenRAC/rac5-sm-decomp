typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0034B46C[];
extern void func_0EE1F8(Entry *entry);

void func_0EE360(unsigned int index) {
    func_0EE1F8(&D_0034B46C[index]);
}
