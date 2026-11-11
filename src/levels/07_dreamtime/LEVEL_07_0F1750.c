typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00346E3C[];
extern void func_0F12C8(Entry *entry);

void func_0F1750(unsigned int index) {
    func_0F12C8(&D_00346E3C[index]);
}
