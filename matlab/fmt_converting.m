% 加载图片,显示 
%I = imread('lena.jpg')
%subplot(221);imshow(I)

load trees
i5=ind2gray(X,map)
figure,imshow(X,map), title("索引图转灰度图显示")


%% 索引图进行二值化处理
load trees
BW6 = im2bw(X,map,0.4) % 0.4阈值的二值化.
imshow(X,map), title("索引图")
figure, imshow(BW6), title("二值化图")

%% gray to indexed img
I = imread('lena.jpg')
%subplot(221);imshow(I)
Xnew = grayslice(I,16);
imshow(I)
figure, imshow(Xnew,jet(16))
