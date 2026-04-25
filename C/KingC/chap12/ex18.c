int evaluate_position(char board[8][8])
{
    int white_sum, black_sum;
    for(char *p = &board[0][0]; p < &board[7][7]; p++)
    {
        if(*p >= 'A' && *p <= 'Z')
            white_sum++;
        if(*p >= 'a' && *p <= 'z')
            black_sum++;
    }

    return white_sum - black_sum;
}
int main(void)
{}
