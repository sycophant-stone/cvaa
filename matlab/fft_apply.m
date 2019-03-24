%% 滤波器的频率响应

gaussian_filter = fspecial('gaussian')
freqz2(gaussian_filter)
title("高斯滤波")
figure
laplacian_filter = fspecial('laplacian')
freqz2(laplacian_filter)
title("拉普拉斯滤波")