typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00348934[];
extern void func_0F61F8(Entry *entry);

void func_0F6328(unsigned int index) {
    func_0F61F8(&D_00348934[index]);
}
