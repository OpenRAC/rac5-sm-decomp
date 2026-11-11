extern char *func_08E7E0(char *data);
extern unsigned short *func_08E800(char *data, unsigned int type, int ordinal);

void sceGimPictureGetChunk__FPCvii(char *first, long long second, int third)
{
    func_08E800(func_08E7E0(first), 3, third);
}
