= IT古典良書を読み解く「アジャイルで幸せになれるのか」

@<strong>{「初めてのアジャイル開発」編}

//flushright{
伊藤慶紀
//}

== 本書との出会い

こんにちは。SHIFTの伊藤と申します。

//quote{
「健康とは、できる限りゆっくりとした速度で死に向かうことでしかない。」 - 作者不明
//}


IT古典良書を読み解くということで、Craig Larman（クレーグ・ラーマン）の『初めてのアジャイル開発 スクラム、XP、UP、Evoで学ぶ反復開発の進め方』を紹介します。何故か、各章の最初に名言が表示されていて、こちらは冒頭の名言は第3章 アジャイルからの引用になります。本書は2004年9月発売となっています。


//image[bookcover][初めてのアジャイル開発書影][scale=0.25]


当時、筆者はまだまだ若輩者のエンジニアでしたが、いくつかのプロジェクト開発を経験し、規模の差はありますが必ずといっても炎上していました。原因は終盤で仕様変更が入ったり、追加漏れがあったり大きな障害が見つかったりと様々でした。何とか納期に間に合っても開発陣はボロボロ、顧客も望んでいたシステムとはズレがあるようですが、これでヨシとする風潮が当時の（ひょっとして、今も!?）ソフトウェア業界でした。


なんとかならないものかと考えアジャイル開発や、テスト駆動開発等に興味を持ち独学で勉強し始めます。当時、「＠IT ITアーキテクト塾 テストファーストの実践」@<fn>{atit}でパネラーから紹介されていた書籍の１つが本書で、色々と疑問に思っていたことがスッキリしたことを覚えています。
（探したら、該当記事がありました。懐かしいですが本質は変わっていないですね。アジャイルは黎明期でスクラムとXPを組み合わせるのが流行っていました。ペアプログラミング以外は今でも使うべきかと。また、テスターが必要とも書かれています。）

//footnote[atit][@<href>{https://www.itmedia.co.jp/im/articles/0602/24/news137.html, https://www.itmedia.co.jp/im/articles/0602/24/news137.html}]

== アジャイルは誇大広告か


アジャイルは誇大広告という話があります。以前からある考え方（反復型など）を誇大広告して再利用しているだけなのではという問いに本書では「YESでもありNOでもある (P.40)」と書かれています。


どういうことかというと、いわゆるアジャイルな考え方は、一昔前の再利用であるためYESだが、スクラムなどの原則やプラティクスを全体としてみると新しいものなのでNOということです。
ここで学べることはアジャイルをバズワードのように用いると、いわゆる「なんちゃってアジャイル」となり「話が違うじゃないか」とまさに誇大広告になってしまい誰も幸せになれない結果になります。（そそのかしたコンサルは幸せになるケースあり）正しくアジャイルを用いることで誰しも幸せになれる可能性があがるということです。


今回はアジャイルの代表的な手法である「スクラム」に関する用語が出てきますので用語の意味を学んでおくとより分かりやすいですが、知らなくても考え方は伝わるかと思います。

==== 《よもやま話》


誇大広告といえば個人的には「ビッグデータ」を思い出します。バズワード化した時期に導入して効果をあげた企業が一体何社あるのか… 「M2M」がいつの間にか「IoT」と言葉を変えて領域を増やしたりと、IT業界は不思議な用語が飛び交います。

== アジャイルを導入する主な理由


よく聞かれる質問に「じゃあ、アジャイルにはどんなメリットがあるの？」があります。これにどう答えるのがいいのでしょうか。「第５章 導入理由(P.62)」にあるアジャイル導入理由の見出しから特に大事だというものをみていきましょう。 

//quote{
 * 反復型開発の方がリスクが低く、ウォーターフォール型の方がリスクが高い
//}


　→　リスクが高い工程が先に来るのがアジャイル、後に来るのがウォーターフォールとなっています。リスクグラフを見ると分かりやすいです。


//image[wf][リスクグラフ：ウォーターフォール][scale=0.45]


//image[agile][リスクグラフ：アジャイル][scale=0.45]

//quote{
 * 最終製品がクライアントの真の希望に適ったものになる
//}

→　早い段階で評価やフィードバックを繰り返すため、製品が望んだものになる可能性が高くなります。これが、いつも私がウォータフォールでモヤモヤしていた顧客が望まないものがリリースされる点を解決する方法になると考えています。

//quote{
 * タイムボックスの利点
//}


→　アジャイルは短い期間で区切って開発をするのですが、調査によるとタイムボックスを導入するだけで生産性が上がるという利点があるそうです。いくつか理由があるそうですが1つ目は「集中」。締め切りギリギリのときに驚くべき生産性を出す方も多いでしょうが。締切が長いと人はだらけてしまうようです。また、タスクを現実的に対処できる程度のものに縮小し、困難な決定を早く行うようになる効果があるようです。


そして、もう一つタイムボックスの価値は人間の不思議な習性に関連するとのことです。それは@<strong>{人は期限を守れなかったことはよく覚えているが、内容が少しぐらい不足していても気にはしない}というものです。100%を要求するウォーターフォールと、優先順位が高い機能から作成し75%でも納期にリリースできるアジャイルを表しているようです。

== アジャイルを使って失敗する方法


いざ、アジャイル開発を始めても失敗することはあります。それでは、どうすると失敗するのかを知っておけば事前に防げるかも知れません。
ここでは代表的なアジャイル手法であるスクラムが失敗する方法の見出しをみてみましょう。（第7章 スクラム P.155）

//quote{
 * 自律的なチームでない。マネージャーまたはスクラムマスターを指揮・編成している
//}


　→　こちらは立ち上げではとても難しいです。マネージャーは解決策を提示して指示しないといけないと思いますし、メンバーは逆に指示を仰ぎがちになってしまいます。徐々にでもいいので自律的なチームを作っていきましょう。個人的に一番良くないことが、決めたスプリントバックログを必ず終えるために、スプリント内でスコープ調整などをせずにウォータフォールのように稼働をあげて対応してしまうことです。

//quote{
 * スプリントや個人に対して新しい作業が追加される
//}


　→　スプリント中は作業を中断させないことが大前提ですが、緊急でどうしてもという場合はバックロググルーミングなどを使いタスク調整をすることが大事だと考えます。単に追加では溢れてしまうだけです。

//quote{
 * プロダクトオーナーが参加していない、あるいは判断を下していない
//}


　→　他にもプロダクトオーナーが複数存在したり、最終意思決定が出来なかったりといった問題も散見されます。個人的にはプロダクトオーナーの意識、熱量不足があるとうまく回らないことが多いようです。

//quote{
 * ドキュメントが不十分である
//}


　→　アジャイル開発はドキュメントを作らなくていいという話を聞いた方も多いかと思いますが、反文章主義ではなく、成果物として定義していないだけであり、価値があるのであれば作成するべきです。


既にアジャイル開発を行っている方もいると思いますが、上記のリストに思い当たる節が無かった方！ おめでとうございます！ 「アジャイルで幸せになれる」を体現できるはずです。
逆に思い当たる節だらけの方、既に様々な歪が起きていると思いますが勇気を持って変革していきましょう。

== 莫邪の剣も持ち手による


「莫邪の剣（ばくやのつるぎ）も持ち手による」という言葉がありますが、どんなに優れた名刀でも持ち手が臆病であったりすると、その真価が発揮できないという意味になります。アジャイルは確かに優れた武器ですが、使い方を誤るとその真価が発揮できません。これは、結果が出ないからと次々とサービスや商品を乗り換える方もいますが、使う側に問題があるというのは往々にしてあることです。


結論としては「アジャイルで幸せになれるが、持ち手による」ということでしょう。


最後に、スクラムが成功する価値について特に大事な個所を引用させていただきます。良い持ち手になりましょう。（第7章 スクラム P.153 一部の用語を分かりやすいよう現代風に改めています）

//quote{
 * コミットすること


スクラムチームは、そのスプリントの目標を達成することをコミットする代わりに、達成するにはどうするのが一番よいかを自分たちで判断する権限と自治権が与えられる。経営陣とスクラムマスターは、スプリントに新しい作業を追加しないこと、チームに指図しないこと、リソースを提供しデイリースクラムで挙げられた障害を迅速に取り除くことをコミットする。プロダクトオーナーは、プロダクトバックログを定義して、その優先順位を付け、次のスプリントの目標を選択するのに際してチームを導き、各スプリントの結果をレビューしてフィードバックすることをコミットする。

 * 敬意を払うこと


または責任転嫁するのではなく、チームで責任を持つこと。チームのメンバーがそれぞれの長所/短所に敬意を払い、スプリントが失敗しても誰か一人の責任にしない。マネージャーではなくチーム全体が、自己組織化と自律によって、グループで解決策を調べて「個人の」問題を解決するという姿勢をとる。また、専門のコンサルタントを雇って足りない知識を補うなどといった難問に対応するための権限とリソースを与えられる。

 * 勇気を出すこと


経営陣は、勇気を持って、適用型の計画や方向性を示し、メンバー個人やチームを信用してスプリントを行う方法に口出ししないようにする。チームは自主性と自己管理を必要とする仕事に勇気をもってあたる。
//}

アジャイルを成功させる方法は「コミットすること」に集約されていますが、最終的には、敬意を払う、勇気を出すといった技術ではなくマインドが大事なんだなということが再認識すると共に、IT業界に○○信者や○○教といった言葉がはびこっている理由もなんとなく分かってしまいました。アジャイル開発をしていない人にも敬意を払いましょう！

そして、本書を執筆していただいたCraig Larman氏に敬意を払いたいと思います。本書では、紹介した項目以外にもウォータフォールが新規製品開発に向かない理由、アジャイルを導入する理由・失敗する方法、スクラムが成功する価値について詳細がまとめられていますので、是非手にとってみてはいかがでしょうか。

==== 《よもやま話》


「莫邪の剣も持ち手による」ということわざは、「宝の持ち腐れ」ではしっくりこないので武器は良くても使う人がダメだと効果が発揮できないということわざは無いかなと探したところぴったりのものを見つけた次第で筆者も初めて使いました。

　

//embed{
    \begin{minipage}{.1\linewidth}
        \centering
        \includegraphics[width=.75\linewidth]{images/chap-sft2021/icon.png}
    \end{minipage}
    \begin{minipage}{.89\linewidth}
        伊藤 慶紀\\
        \end{minipage}
    \hspace{1ex}
//}

大手SIerにて業務用アプリケーションの開発に従事。ウォーターフォールは何故炎上するのか疑問を感じ、アジャイルに目覚め、一時期、休職してアメリカに語学留学。
Facebookの勢いを目の当たりにしたのち、帰国後、クラウド関連のサービス・プロダクト企画・立ち上げを行う。
その後、ベンチャーに転職し、個人向けアプリ・WebサービスのPM、社内システム刷新など様々なプロジェクト経験を経てSHIFTに入社。
趣味は将棋、ドライブ、ラーメン、花火、読書など
