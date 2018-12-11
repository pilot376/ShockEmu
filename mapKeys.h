dpadRight = DOWN(124);
dpadUp = DOWN(126);
dpadDown = DOWN(125);
R1 = DOWN(18);
R3 = DOWN(20);
R2 = DOWN(19);
L2 = DOWN(23);
L1 = DOWN(21);
L3 = DOWN(22);
O = DOWN(0);
options = DOWN(8);
square = DOWN(2);
rightX = rightY = 0;
if(DOWN(5)) rightY += 1;
if(DOWN(3)) rightX -= 1;
leftX = leftY = 0;
if(DOWN(34)) leftY -= 1;
if(DOWN(4)) rightX += 1;
if(DOWN(40)) leftY += 1;
if(DOWN(38)) leftX -= 1;
if(DOWN(37)) leftX += 1;
triangle = DOWN(12);
X = DOWN(1);
if(DOWN(17)) rightY -= 1;
share = DOWN(9);
touchpad = DOWN(7);
PS = DOWN(6);
dpadLeft = DOWN(123);
if(mouseMoved) {
	rightX += mouseVelX * 1000;
	rightY -= mouseVelY * 1000;
	mouseMoved = false;
} else {
	rightX /= 1.2;
	rightY /= 1.2;
	if(fabs(rightX) > .05 || fabs(rightY) > .05) {
		NSLog(@"Still decaying... %f %f", rightX, rightY);
		[self decayKick];
	} else
		rightX = rightY = 0;
}
