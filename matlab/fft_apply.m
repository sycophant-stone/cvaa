%% �˲�����Ƶ����Ӧ

gaussian_filter = fspecial('gaussian')
freqz2(gaussian_filter)
title("��˹�˲�")
figure
laplacian_filter = fspecial('laplacian')
freqz2(laplacian_filter)
title("������˹�˲�")