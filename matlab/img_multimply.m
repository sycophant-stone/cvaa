function ImgSub
img1=imread('saturn.png');%�����һ��ͼ��
img1=rgb2gray(img1);
subplot(221),imshow(img1);
img2=imread('rice.png')
%img2=rgb2gray(img2); %������gray��
subplot(222),imshow(img2);
[h,w]=size(img1)
img2=imresize(img2,[h,w])
img_mul1 = immultiply(img1,img2)
subplot(223),imshow(img_mul1 );
img_mul2 = immultiply(img1,2)
subplot(224),imshow(img_mul2 );
