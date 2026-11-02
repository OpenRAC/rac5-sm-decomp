extern volatile unsigned char positional_lock;

void SND_UnlockPositionalArray__Fv(void) {
    if (positional_lock) positional_lock = 0;
}
