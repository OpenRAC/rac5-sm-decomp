typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_00284898[];
extern void func_09CE78(Entry *entry);

void func_09CD78(unsigned int index) {
    func_09CE78(&D_00284898[index]);
}
