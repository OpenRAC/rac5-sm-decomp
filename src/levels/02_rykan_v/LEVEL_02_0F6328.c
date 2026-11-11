typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_00348934[];
extern void func_0F61F8(void *entry, void *v);

void func_0F6328(unsigned int index, void *v) {
    func_0F61F8(&D_00348934[index], v);
}
