typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_00284898[];
extern int func_09CE78(Entry *entry);

int func_09CD78(unsigned int index) {
    return func_09CE78(&D_00284898[index]);
}
