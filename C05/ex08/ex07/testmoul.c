

#include <stdio.h>

int		ft_find_next_prime(int nb);

int	main(void)
{
    int a = 0;
    int retval;
	printf("-3280    ");
	if((retval = ft_find_next_prime(-3280)) != 2)
	{
		a++;
		printf("failed: %d should be 2     ", retval);
	}

	printf("0    ");
	if((retval = ft_find_next_prime(0)) != 2)
	{
		a++;
		printf("failed: %d should be 2     ", retval);
	}

	printf("1    ");
	if((retval = ft_find_next_prime(1)) != 2)
	{
		a++;
		printf("failed: %d should be 2     ", retval);
	}

	printf("2    ");
	if((retval = ft_find_next_prime(2)) != 2)
	{
		a++;
		printf("failed: %d should be 2     ", retval);
	}

	printf("7853    ");
	if((retval = ft_find_next_prime(7853)) != 7853)
	{
		a++;
		printf("failed: %d should be 7853     ", retval);
	}

	printf("78989    ");
	if((retval = ft_find_next_prime(78989)) != 78989)
	{
		a++;
		printf("failed: %d should be 78989     ", retval);
	}

	printf("2147483643    ");
	if((retval = ft_find_next_prime(2147483643)) != 2147483647)
	{
		a++;
		printf("failed: %d should be 2147483647     ", retval);
	}

	printf("2147483645    ");
	if((retval = ft_find_next_prime(2147483645)) != 2147483647)
	{
		a++;
		printf("failed: %d should be 2147483647     ", retval);
	}

	printf("2147483646    ");
	if((retval = ft_find_next_prime(2147483646)) != 2147483647)
	{
		a++;
		printf("failed: %d should be 2147483647     ", retval);
	}

	printf("2147483647    ");
	if((retval = ft_find_next_prime(2147483647)) != 2147483647)
	{
		a++;
		printf("failed: %d should be 2147483647     ", retval);
	}

	printf("250890    ");
	if((retval = ft_find_next_prime(250890)) != 250919)
	{
		a++;
		printf("failed: %d should be 250919     ", retval);
	}

	printf("39435    ");
	if((retval = ft_find_next_prime(39435)) != 39439)
	{
		a++;
		printf("failed: %d should be 39439     ", retval);
	}

	printf("366611    ");
	if((retval = ft_find_next_prime(366611)) != 366631)
	{
		a++;
		printf("failed: %d should be 366631     ", retval);
	}

	printf("151574    ");
	if((retval = ft_find_next_prime(151574)) != 151579)
	{
		a++;
		printf("failed: %d should be 151579     ", retval);
	}

	printf("36890    ");
	if((retval = ft_find_next_prime(36890)) != 36899)
	{
		a++;
		printf("failed: %d should be 36899     ", retval);
	}

	printf("129565    ");
	if((retval = ft_find_next_prime(129565)) != 129581)
	{
		a++;
		printf("failed: %d should be 129581     ", retval);
	}

	printf("80417    ");
	if((retval = ft_find_next_prime(80417)) != 80429)
	{
		a++;
		printf("failed: %d should be 80429     ", retval);
	}

	printf("205860    ");
	if((retval = ft_find_next_prime(205860)) != 205879)
	{
		a++;
		printf("failed: %d should be 205879     ", retval);
	}

	printf("189480    ");
	if((retval = ft_find_next_prime(189480)) != 189491)
	{
		a++;
		printf("failed: %d should be 189491     ", retval);
	}

	printf("207913    ");
	if((retval = ft_find_next_prime(207913)) != 207923)
	{
		a++;
		printf("failed: %d should be 207923     ", retval);
	}

	printf("176175    ");
	if((retval = ft_find_next_prime(176175)) != 176179)
	{
		a++;
		printf("failed: %d should be 176179     ", retval);
	}

	printf("68664    ");
	if((retval = ft_find_next_prime(68664)) != 68669)
	{
		a++;
		printf("failed: %d should be 68669     ", retval);
	}

	printf("102458    ");
	if((retval = ft_find_next_prime(102458)) != 102461)
	{
		a++;
		printf("failed: %d should be 102461     ", retval);
	}

	printf("248891    ");
	if((retval = ft_find_next_prime(248891)) != 248891)
	{
		a++;
		printf("failed: %d should be 248891     ", retval);
	}

	printf("147521    ");
	if((retval = ft_find_next_prime(147521)) != 147541)
	{
		a++;
		printf("failed: %d should be 147541     ", retval);
	}

	printf("59974    ");
	if((retval = ft_find_next_prime(59974)) != 59981)
	{
		a++;
		printf("failed: %d should be 59981     ", retval);
	}

	printf("251319    ");
	if((retval = ft_find_next_prime(251319)) != 251323)
	{
		a++;
		printf("failed: %d should be 251323     ", retval);
	}

	printf("309324    ");
	if((retval = ft_find_next_prime(309324)) != 309359)
	{
		a++;
		printf("failed: %d should be 309359     ", retval);
	}

	printf("39506    ");
	if((retval = ft_find_next_prime(39506)) != 39509)
	{
		a++;
		printf("failed: %d should be 39509     ", retval);
	}

	printf("305241    ");
	if((retval = ft_find_next_prime(305241)) != 305243)
	{
		a++;
		printf("failed: %d should be 305243     ", retval);
	}

	printf("76383    ");
	if((retval = ft_find_next_prime(76383)) != 76387)
	{
		a++;
		printf("failed: %d should be 76387     ", retval);
	}

	printf("25708    ");
	if((retval = ft_find_next_prime(25708)) != 25717)
	{
		a++;
		printf("failed: %d should be 25717     ", retval);
	}

	printf("191597    ");
	if((retval = ft_find_next_prime(191597)) != 191599)
	{
		a++;
		printf("failed: %d should be 191599     ", retval);
	}

	printf("61044    ");
	if((retval = ft_find_next_prime(61044)) != 61051)
	{
		a++;
		printf("failed: %d should be 61051     ", retval);
	}

	printf("266870    ");
	if((retval = ft_find_next_prime(266870)) != 266891)
	{
		a++;
		printf("failed: %d should be 266891     ", retval);
	}

	printf("392322    ");
	if((retval = ft_find_next_prime(392322)) != 392333)
	{
		a++;
		printf("failed: %d should be 392333     ", retval);
	}

	printf("157318    ");
	if((retval = ft_find_next_prime(157318)) != 157321)
	{
		a++;
		printf("failed: %d should be 157321     ", retval);
	}

	printf("108687    ");
	if((retval = ft_find_next_prime(108687)) != 108707)
	{
		a++;
		printf("failed: %d should be 108707     ", retval);
	}

	printf("251027    ");
	if((retval = ft_find_next_prime(251027)) != 251033)
	{
		a++;
		printf("failed: %d should be 251033     ", retval);
	}

	printf("229533    ");
	if((retval = ft_find_next_prime(229533)) != 229547)
	{
		a++;
		printf("failed: %d should be 229547     ", retval);
	}

	printf("33952    ");
	if((retval = ft_find_next_prime(33952)) != 33961)
	{
		a++;
		printf("failed: %d should be 33961     ", retval);
	}

	printf("361633    ");
	if((retval = ft_find_next_prime(361633)) != 361637)
	{
		a++;
		printf("failed: %d should be 361637     ", retval);
	}

	printf("361125    ");
	if((retval = ft_find_next_prime(361125)) != 361159)
	{
		a++;
		printf("failed: %d should be 361159     ", retval);
	}

	printf("237734    ");
	if((retval = ft_find_next_prime(237734)) != 237737)
	{
		a++;
		printf("failed: %d should be 237737     ", retval);
	}

	printf("259757    ");
	if((retval = ft_find_next_prime(259757)) != 259771)
	{
		a++;
		printf("failed: %d should be 259771     ", retval);
	}

	printf("123060    ");
	if((retval = ft_find_next_prime(123060)) != 123077)
	{
		a++;
		printf("failed: %d should be 123077     ", retval);
	}

	printf("357150    ");
	if((retval = ft_find_next_prime(357150)) != 357169)
	{
		a++;
		printf("failed: %d should be 357169     ", retval);
	}

	printf("111287    ");
	if((retval = ft_find_next_prime(111287)) != 111301)
	{
		a++;
		printf("failed: %d should be 111301     ", retval);
	}

	printf("47809    ");
	if((retval = ft_find_next_prime(47809)) != 47809)
	{
		a++;
		printf("failed: %d should be 47809     ", retval);
	}

	printf("301252    ");
	if((retval = ft_find_next_prime(301252)) != 301267)
	{
		a++;
		printf("failed: %d should be 301267     ", retval);
	}

	printf("260812    ");
	if((retval = ft_find_next_prime(260812)) != 260849)
	{
		a++;
		printf("failed: %d should be 260849     ", retval);
	}

	printf("155871    ");
	if((retval = ft_find_next_prime(155871)) != 155887)
	{
		a++;
		printf("failed: %d should be 155887     ", retval);
	}

	printf("122592    ");
	if((retval = ft_find_next_prime(122592)) != 122597)
	{
		a++;
		printf("failed: %d should be 122597     ", retval);
	}

	printf("42732    ");
	if((retval = ft_find_next_prime(42732)) != 42737)
	{
		a++;
		printf("failed: %d should be 42737     ", retval);
	}

	printf("278770    ");
	if((retval = ft_find_next_prime(278770)) != 278801)
	{
		a++;
		printf("failed: %d should be 278801     ", retval);
	}

	printf("92405    ");
	if((retval = ft_find_next_prime(92405)) != 92413)
	{
		a++;
		printf("failed: %d should be 92413     ", retval);
	}

	printf("43773    ");
	if((retval = ft_find_next_prime(43773)) != 43777)
	{
		a++;
		printf("failed: %d should be 43777     ", retval);
	}

	printf("53504    ");
	if((retval = ft_find_next_prime(53504)) != 53507)
	{
		a++;
		printf("failed: %d should be 53507     ", retval);
	}

	printf("199041    ");
	if((retval = ft_find_next_prime(199041)) != 199049)
	{
		a++;
		printf("failed: %d should be 199049     ", retval);
	}

	printf("45330    ");
	if((retval = ft_find_next_prime(45330)) != 45337)
	{
		a++;
		printf("failed: %d should be 45337     ", retval);
	}

	printf("72239    ");
	if((retval = ft_find_next_prime(72239)) != 72251)
	{
		a++;
		printf("failed: %d should be 72251     ", retval);
	}

	printf("40734    ");
	if((retval = ft_find_next_prime(40734)) != 40739)
	{
		a++;
		printf("failed: %d should be 40739     ", retval);
	}

	printf("418079    ");
	if((retval = ft_find_next_prime(418079)) != 418079)
	{
		a++;
		printf("failed: %d should be 418079     ", retval);
	}

	printf("149282    ");
	if((retval = ft_find_next_prime(149282)) != 149287)
	{
		a++;
		printf("failed: %d should be 149287     ", retval);
	}

	printf("154920    ");
	if((retval = ft_find_next_prime(154920)) != 154927)
	{
		a++;
		printf("failed: %d should be 154927     ", retval);
	}

	printf("18222    ");
	if((retval = ft_find_next_prime(18222)) != 18223)
	{
		a++;
		printf("failed: %d should be 18223     ", retval);
	}

	printf("277301    ");
	if((retval = ft_find_next_prime(277301)) != 277301)
	{
		a++;
		printf("failed: %d should be 277301     ", retval);
	}

	printf("358710    ");
	if((retval = ft_find_next_prime(358710)) != 358711)
	{
		a++;
		printf("failed: %d should be 358711     ", retval);
	}

	printf("313656    ");
	if((retval = ft_find_next_prime(313656)) != 313661)
	{
		a++;
		printf("failed: %d should be 313661     ", retval);
	}

	printf("262458    ");
	if((retval = ft_find_next_prime(262458)) != 262459)
	{
		a++;
		printf("failed: %d should be 262459     ", retval);
	}

	printf("132924    ");
	if((retval = ft_find_next_prime(132924)) != 132929)
	{
		a++;
		printf("failed: %d should be 132929     ", retval);
	}

	printf("217414    ");
	if((retval = ft_find_next_prime(217414)) != 217421)
	{
		a++;
		printf("failed: %d should be 217421     ", retval);
	}

	printf("30025    ");
	if((retval = ft_find_next_prime(30025)) != 30029)
	{
		a++;
		printf("failed: %d should be 30029     ", retval);
	}

	printf("77643    ");
	if((retval = ft_find_next_prime(77643)) != 77647)
	{
		a++;
		printf("failed: %d should be 77647     ", retval);
	}

	printf("225624    ");
	if((retval = ft_find_next_prime(225624)) != 225629)
	{
		a++;
		printf("failed: %d should be 225629     ", retval);
	}

	printf("276313    ");
	if((retval = ft_find_next_prime(276313)) != 276319)
	{
		a++;
		printf("failed: %d should be 276319     ", retval);
	}

	printf("234844    ");
	if((retval = ft_find_next_prime(234844)) != 234847)
	{
		a++;
		printf("failed: %d should be 234847     ", retval);
	}

	printf("413539    ");
	if((retval = ft_find_next_prime(413539)) != 413551)
	{
		a++;
		printf("failed: %d should be 413551     ", retval);
	}

	printf("201572    ");
	if((retval = ft_find_next_prime(201572)) != 201577)
	{
		a++;
		printf("failed: %d should be 201577     ", retval);
	}

	printf("150891    ");
	if((retval = ft_find_next_prime(150891)) != 150893)
	{
		a++;
		printf("failed: %d should be 150893     ", retval);
	}

	printf("12141    ");
	if((retval = ft_find_next_prime(12141)) != 12143)
	{
		a++;
		printf("failed: %d should be 12143     ", retval);
	}

	printf("214398    ");
	if((retval = ft_find_next_prime(214398)) != 214399)
	{
		a++;
		printf("failed: %d should be 214399     ", retval);
	}

	printf("222081    ");
	if((retval = ft_find_next_prime(222081)) != 222107)
	{
		a++;
		printf("failed: %d should be 222107     ", retval);
	}

	printf("24458    ");
	if((retval = ft_find_next_prime(24458)) != 24469)
	{
		a++;
		printf("failed: %d should be 24469     ", retval);
	}

	printf("264075    ");
	if((retval = ft_find_next_prime(264075)) != 264083)
	{
		a++;
		printf("failed: %d should be 264083     ", retval);
	}

	printf("44430    ");
	if((retval = ft_find_next_prime(44430)) != 44449)
	{
		a++;
		printf("failed: %d should be 44449     ", retval);
	}

	printf("267157    ");
	if((retval = ft_find_next_prime(267157)) != 267167)
	{
		a++;
		printf("failed: %d should be 267167     ", retval);
	}

	printf("409494    ");
	if((retval = ft_find_next_prime(409494)) != 409499)
	{
		a++;
		printf("failed: %d should be 409499     ", retval);
	}

	printf("297386    ");
	if((retval = ft_find_next_prime(297386)) != 297391)
	{
		a++;
		printf("failed: %d should be 297391     ", retval);
	}

	printf("146359    ");
	if((retval = ft_find_next_prime(146359)) != 146359)
	{
		a++;
		printf("failed: %d should be 146359     ", retval);
	}

	printf("183029    ");
	if((retval = ft_find_next_prime(183029)) != 183037)
	{
		a++;
		printf("failed: %d should be 183037     ", retval);
	}

	printf("266177    ");
	if((retval = ft_find_next_prime(266177)) != 266177)
	{
		a++;
		printf("failed: %d should be 266177     ", retval);
	}

	printf("326086    ");
	if((retval = ft_find_next_prime(326086)) != 326087)
	{
		a++;
		printf("failed: %d should be 326087     ", retval);
	}

	printf("216225    ");
	if((retval = ft_find_next_prime(216225)) != 216233)
	{
		a++;
		printf("failed: %d should be 216233     ", retval);
	}

	printf("396234    ");
	if((retval = ft_find_next_prime(396234)) != 396239)
	{
		a++;
		printf("failed: %d should be 396239     ", retval);
	}

	printf("200143    ");
	if((retval = ft_find_next_prime(200143)) != 200153)
	{
		a++;
		printf("failed: %d should be 200153     ", retval);
	}

	printf("382416    ");
	if((retval = ft_find_next_prime(382416)) != 382427)
	{
		a++;
		printf("failed: %d should be 382427     ", retval);
	}

	printf("316369    ");
	if((retval = ft_find_next_prime(316369)) != 316373)
	{
		a++;
		printf("failed: %d should be 316373     ", retval);
	}

	printf("417236    ");
	if((retval = ft_find_next_prime(417236)) != 417239)
	{
		a++;
		printf("failed: %d should be 417239     ", retval);
	}

	printf("77272    ");
	if((retval = ft_find_next_prime(77272)) != 77279)
	{
		a++;
		printf("failed: %d should be 77279     ", retval);
	}

	printf("241118    ");
	if((retval = ft_find_next_prime(241118)) != 241127)
	{
		a++;
		printf("failed: %d should be 241127     ", retval);
	}

	printf("231906    ");
	if((retval = ft_find_next_prime(231906)) != 231919)
	{
		a++;
		printf("failed: %d should be 231919     ", retval);
	}

	printf("361447    ");
	if((retval = ft_find_next_prime(361447)) != 361447)
	{
		a++;
		printf("failed: %d should be 361447     ", retval);
	}

	printf("210409    ");
	if((retval = ft_find_next_prime(210409)) != 210421)
	{
		a++;
		printf("failed: %d should be 210421     ", retval);
	}

	printf("28141    ");
	if((retval = ft_find_next_prime(28141)) != 28151)
	{
		a++;
		printf("failed: %d should be 28151     ", retval);
	}

	printf("59374    ");
	if((retval = ft_find_next_prime(59374)) != 59377)
	{
		a++;
		printf("failed: %d should be 59377     ", retval);
	}

	printf("201201    ");
	if((retval = ft_find_next_prime(201201)) != 201203)
	{
		a++;
		printf("failed: %d should be 201203     ", retval);
	}

	printf("126454    ");
	if((retval = ft_find_next_prime(126454)) != 126457)
	{
		a++;
		printf("failed: %d should be 126457     ", retval);
	}

	printf("25083    ");
	if((retval = ft_find_next_prime(25083)) != 25087)
	{
		a++;
		printf("failed: %d should be 25087     ", retval);
	}

	printf("421802    ");
	if((retval = ft_find_next_prime(421802)) != 421807)
	{
		a++;
		printf("failed: %d should be 421807     ", retval);
	}


    if (a == 0)
        printf("Test passed");
    else
        printf("Test failed");
	return (0);
}
