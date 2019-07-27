var a = [9,7,5,5];
var b =   [9,9,1];

var c = [];

var carry = 0;

var sum = 0;

var ans = 0;

for(var i=3; i>=0;i--){

	if(b[i]){
		sum = a[i] + carry;
	}else{
		sum = a[i] + b[i] + carry;
	}
	
	

	ans = sum%10;

	if(i==0){
		c[i] = sum;
		
	}else{
		c[i] = ans;
		carry = Math.floor(sum/10);
	}

	

	



}


console.log(c);

