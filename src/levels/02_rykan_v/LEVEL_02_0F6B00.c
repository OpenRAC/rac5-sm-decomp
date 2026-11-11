typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00348A3C[];
extern void func_0F6678(Entry *entry);

void func_0F6B00(unsigned int index) {
    func_0F6678(&D_00348A3C[index]);
}
