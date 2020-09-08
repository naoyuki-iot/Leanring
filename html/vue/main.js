/*var app = new Vue({
    el: '#app',
    data: {
        show:true
        //message: 'Hello Vue.js!'
        //list: ['りんご', 'ばなな', 'いちご']
    }
  })*/

/*var app = new Vue({
    el: '#app',
    methods: {
      handleClick: function (event) {
        alert(event.target) // [object HTMLButtonElement]
      }
    }
  })*/

/*var app = new Vue({
    el: '#app',
    data: {
    message: '初期メッセージ'
    }
})*/

/*new Vue({
    el: '#app',
    data: {
      // オブジェクトデータ
      message: {
        value: 'Hello Vue.js!'
      },
      // 配列データ 3 と 4 で使用
      list: ['りんご', 'ばなな', 'いちご'],
      // 別のデータを使用してlistから取り出す要素を動的に 4 で使用
      num: 1
    }
  })*/

/*new Vue({
  el: '#app',
  data: {
    count: 0
  },
  methods: {
    // ボタンをクリックしたときのハンドラ
    increment: function () {
      this.count += 1 // 処理は再代入するだけでOK！
    }
  }
})*/

new Vue({
    el: '#app',
    data: {
      isChild: true,
      isActive: true,
      textColor: 'red',
      bgColor: 'lightgray'
    }
  })