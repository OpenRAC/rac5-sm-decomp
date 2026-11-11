typedef struct { unsigned char bytes[52]; } Entry;
extern Entry D_0031D2F4[];
extern void func_0EC188(void *entry, void *v);

void func_0EC2B8(unsigned int index, void *v) {
    func_0EC188(&D_0031D2F4[index], v);
}
