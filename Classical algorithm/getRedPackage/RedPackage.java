import java.math.BigDecimal;
import java.util.ArrayList;
import java.util.List;
import java.util.Random;

/*
两倍均值法：
剩余红包金额为M，剩余人数为N，那么有如下公式：
每次抢到的金额 = 随机区间 （0， M / N X 2）
这个公式，保证了每次随机金额的平均值是相等的，不会因为抢红包的先后顺序而造成不公平。
举个栗子：
假设有10个人，红包总额100元。
100/10X2 = 20, 所以第一个人的随机范围是（0，20 )，平均可以抢到10元。
假设第一个人随机到10元，那么剩余金额是100-10 = 90 元。
90/9X2 = 20, 所以第二个人的随机范围同样是（0，20 )，平均可以抢到10元。
假设第二个人随机到10元，那么剩余金额是90-10 = 80 元。
80/8X2 = 20, 所以第三个人的随机范围同样是（0，20 )，平均可以抢到10元。
以此类推，每一次随机范围的均值是相等的。
 */
public class RedPackage {
    public static List<Integer> divideRedPackage(Integer totalAmount, Integer totalPeopleNum){
        List<Integer> amountList = new ArrayList<Integer>();
        Integer restAmount = totalAmount;
        Integer restPeopleNum = totalPeopleNum;
        Random random = new Random();
        for(int i = 0; i < totalPeopleNum - 1; i++){
            //随机范围：[1， 剩余人均金额的两倍)，左闭右开
            int amount = random.nextInt(restAmount / restPeopleNum * 2 - 1) + 1;
            restAmount -= amount;
            restPeopleNum--;
            amountList.add(amount);
        }
        amountList.add(restAmount);
        return amountList;
    }

    public static void main(String[] args) {
        List<Integer> amountList = divideRedPackage(5000, 8);//除以100为元
        for(Integer amount : amountList){
            System.out.println("抢到金额：" + new BigDecimal(amount).divide(new BigDecimal(100)));
        }
    }
}
