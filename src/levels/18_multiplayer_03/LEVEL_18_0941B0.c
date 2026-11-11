typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026B328[];
extern int func_0942B0(Entry *entry);

int func_0941B0(unsigned int index) {
    return func_0942B0(&D_0026B328[index]);
}
