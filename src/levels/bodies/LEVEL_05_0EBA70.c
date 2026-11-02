typedef struct { unsigned char bytes[100]; } Entry;
extern Entry D_0031C47C[];
extern void func_0EB940(Entry *entry);

void func_0EBA70(unsigned int index) {
    func_0EB940(&D_0031C47C[index]);
}
