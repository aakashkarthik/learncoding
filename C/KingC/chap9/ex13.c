int evaluate_position(char board[8][8])
{
    int white_sum, black_sum;
    for(int i = 0; i < 8; i++)
    {
        for(int j = 0; j < 8; j++)
        {
            if(board[i][j] >= 'A' && board[i][j] <= 'Z')
                white_sum++;
            if(board[i][j] >= 'a' && board[i][j] <= 'z')
                black_sum++;
        }
    }
    
    return white_sum - black_sum;
}
