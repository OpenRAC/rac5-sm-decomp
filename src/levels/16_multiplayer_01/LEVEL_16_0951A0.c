typedef struct { unsigned char bytes[24]; } Entry;
extern Entry D_0026AFA8[];
extern int func_0952A0(Entry *entry);

int func_0951A0(unsigned int index) {
    return func_0952A0(&D_0026AFA8[index]);
}
